#ifndef XFS_INTERFACE_H

#define XFS_INTERFACE_H

#define DO_NOT_FORMAT 0
#define FORMAT 1

void cli();
void runCommand(char command[]);
void cli_init_completion();
void cli_run_with_completion();
char **xfs_cli_completion(const char *text, int start, int end);
char *xfs_cli_command_gen(const char *text, int state);
char *xfs_cli_opt_gen(const char *text, int state);
char *xfs_cli_file_gen(const char *text, int state);
char *xfs_cli_int_gen(const char *text, int state);
char *xfs_cli_module_gen(const char *text, int state);
char *xfs_cli_dump_gen(const char *text, int state);

#endif
