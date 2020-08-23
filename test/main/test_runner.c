#include "unity.h"

static void print_banner(const char *text);

void app_main(void)
{
    /* This is just the test runner.
     * The real tests are on "components/#/test".
     */

    UNITY_BEGIN();

    unity_run_all_tests();

    UNITY_END();

    print_banner("Starting interactive test menu");

    /* This function will not return, and will be busy waiting for UART input.
     * That's why "test/sdkconfig -> CONFIG_TASK_WDT_CHECK_IDLE_TASK_CPU0" is
     * disabled.
     */
    unity_run_menu();
}

static void print_banner(const char *text)
{
    printf("\n#### %s #####\n\n", text);
}