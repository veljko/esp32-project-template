#ifndef __COMPONENT_NAME_CONFIG_H__
#define __COMPONENT_NAME_CONFIG_H__

#ifdef __cplusplus
extern "C"
{
#endif

   /* The "defines" below will also be defined in the
      "sdkconfig" file when running "idf.py menuconfig".
      Once defined there, the ones below will have no effect.
   */

#ifndef CONFIG_COMP_NAME_CONFIG_ONE
/**
 * Event queue, enqueue wait time (ms).
 */
#define CONFIG_COMP_NAME_CONFIG_ONE 50
#endif

#ifdef __cplusplus
}
#endif
#endif
