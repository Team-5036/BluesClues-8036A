VEX-Team1
=========
/*@author Team 8036A - Blues Clues
 *  ______   _                 _______  _  _______    _______  _                 _______  _______
 * (  ___ \ ( \      |\     /|(  ____ \( )(  ____ \  (  ____ \( \      |\     /|(  ____ \(  ____ \
 * | (   ) )| (      | )   ( || (    \/|/ | (    \/  | (    \/| (      | )   ( || (    \/| (    \/
 * | (__/ / | |      | |   | || (__       | (_____   | |      | |      | |   | || (__    | (_____
 * |  __ (  | |      | |   | ||  __)      (_____  )  | |      | |      | |   | ||  __)   (_____  )
 * | (  \ \ | |      | |   | || (               ) |  | |      | |      | |   | || (            ) |
 * | )___) )| (____/\| (___) || (____/\   /\____) |  | (____/\| (____/\| (___) || (____/\/\____) |
 * |/ \___/ (_______/(_______)(_______/   \_______)  (_______/(_______/(_______)(_______/\_______)
 */
//* =============================================================================*//
/*														PROGRAMMER'S NOTES
 *Robot configuration:
 *						M1 = frontLeft		M2 = frontRight		M3 = backLeft		M4 = backRight
 *B1 = frontBumper	B2 = leftBumper	B3=backLeftBumper	B4=backRightBumper	B5 = rightBumper
 *																				C = Cortex
 *
 *
 *                                |------|      |------|
 *                                | M1/-/|      |\-\M2 |
 *                                |  / / |      | \ \  |
 *                                | /_/  |  B1  |  \_\ |
 *                             B2 |      |------|      | B5
 *                                |                    |
 *                                | \-\            /-/ |
 *                                |  \ \  |---|   / /  |
 *                                | M3\_\ | C |  /_/M4 |
 *                                |--------------------|
 *                                 B3								B4
 *Gyro Scale:
 *	1 degree = 10
 *
 *DriveTrain:
 *	reads and maps the vexRT joystick for the x-drive
 *		Ch3 (y-axis) => forward/backward movement
 *		Ch4 (x-axis) => side-to-side movement
 *		Ch1 (z-axis) => joystick side-to-side
 *
 *NOTE:
 *	Sensors must be looped to find values while robot is enabled but avoid infinite loops.
 *	As a result, this forces you to state all variables within the functions.
 */
