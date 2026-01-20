				SCHEDULER README

Aug 4, 1999

This document describes how the AIP (and other parameters) are used by the scheduler
to assign craft in Star Trek: Armada to goals.

The steps in a scheduling phase are first described followed by details of how the 
computations at selected steps are made.

Scheduler 12 step program:

	  1) A strategic map is created by dividing the map into grid
         squares

	  2) Each grid square has one of each goal type associated with
         it.

	  3) Compute the raw priority of each goal at each grid square.

	  4) Compute the match utilty between every squad and goal.

	  5) Sort matches highest to lowest.

	  6) Examine highest match that contains a squad with uncommitted
         units.

	  7) Commit units from squad in match to associated goal.

	  8) If the goal has enough unit strength commited to it, command
	     those commited units to move to the grid cell of the goal.

	  9) When all units on the team have been committed to goals, goto
         step 11.

	 10) Otherwise examine next match and goto step 7.

	 11) Rollback committed units from goals that still do not have
	     enough troop strength and mark those units invalid for the
	     goal.

	 12) Goto step 6.


Step 1, the Strategic Map:

  Parameters are specified in the strategic_AI_config.txt file.
  Parameters that are important to the strategic AI are:

  // number of map units per grid sell (ie. 400x400 units per grid cell)
  #define goal_map_resolution 400

  // Fraction of bleedover during threat relax
  double relaxation_coefficient = 0.8;

  // Number of threat relax cycles. This becomes how far away a threat is felt.
  int relaxation_cycles = 2;

Step 2, goals are assigned to grid squares:

  Escort goals are the exception to this rule.  One escort goal is
  created for every unit on your team that is of the Freighter Class.
  The four goals that are created for each map grid cell are the:
  Attack Base Goal, Attack Goal, Defend Goal and Explore Goal.

Step 3, compute the raw priority of each goal:

	 The raw priority is computed for each goal type in this way:

	 Attack Goal: 

			If the grid cell has enemy stations or contains no enemy
			threat, the goal is invalid.  Otherwise, the value is the
			SUM of these factors:

			1) Distance To Our Empire
			   * AIP->distance_from_home_priority_modifier
			2) Distance To Enemy Empire 
			   * AIP->distance_from_enemy_priority_modifier
			3) Threat in Map Cell
			   * AIP->attack_troops_priority 
			4) AIP->perimeter_priority (if a Perimeter Map Cell)

	Defend Goal:
	
			If the grid cell contains no friendly stations, the goal
			is invalid.  Otherwise, the value is the SUM of these
			factors:

			1) Distance To Our Empire
			   * AIP->distance_from_home_priority_modifier
			2) Distance To Enemy Empire 
			   * AIP->distance_from_enemy_priority_modifier
			3) Threat in Map Cell
			   * AIP->attack_troops_priority 
			4) AIP->perimeter_priority (if a Perimeter Map Cell)
			5) Number of Our Stations in Cell
			   * AIP->defend_buildings_priority 
	
	Attack Base Goal:

			If the grid cell contains no enemy stations, the goal
			is invalid.  Otherwise, the value is the SUM of these
			factors:

			1) Distance To Our Empire
			   * AIP->distance_from_home_priority_modifier
			2) Distance To Enemy Empire 
			   * AIP->distance_from_enemy_priority_modifier
			3) Threat in Map Cell
			   * AIP->attack_troops_priority 
			4) AIP->perimeter_priority (if a Perimeter Map Cell)
			5) Number of Enemy Stations in Cell
			   * AIP->attack_enemy_base_priority 		   		   

	Explore Goal:

			If the grid cell as already been explored, the goal
			is invalid.  Otherwise, the value is the SUM of these
			factors:

			1) Distance To Our Empire
			   * AIP->distance_from_home_priority_modifier
			2) Distance To Enemy Empire 
			   * AIP->distance_from_enemy_priority_modifier
			3) AIP->perimeter_priority (if a Perimeter Map Cell)
			4) AIP->exploration_priority

	Escore Goal:

			If the craft this escort goal is attached to is destroyed,
			the goal is invalid.  Otherwise, the value is the SUM of
			these factors:

			1) Distance To Our Empire
			   * AIP->distance_from_home_priority_modifier
			2) Distance To Enemy Empire 
			   * AIP->distance_from_enemy_priority_modifier
			3) AIP->perimeter_priority (if a Perimeter Map Cell)
			4) AIP->escort_priority		   

Step 4, compute the match utilty between a squad and goal:

	 The squad match value is computed from the average matching value
	 for the units in a squad.  The match utility of a unit the SUM of
	 these factors:

		   1) Distance from unit to goal
		      * AIP->distance_from_goal_match_modifier

		   2) Raw Priority of goal.


Step 7, commit units from squad in match to associated goal:

	 Units in a squad are commited based on their match utility;
	 ie. closest units are commited before further ones.


Step 8, check if the goal has enough unit strength commited to it:

	 The Attack Goal, Defend Goal and Attack Base Goals, currently
	 only require that the total shield strength of enemy units at the
	 target is less than the total shields of the commited units.

	 Note: Force matching values are not currently used.

	 The Escort Goal is satisfied when units with shields that exceed
	 1000 * the Build Time of the ship have been commited.  This
	 obviously needs a more logical measure.

	 The Explore Goal is satisfied when atleast one ship has been
	 commited to it.

