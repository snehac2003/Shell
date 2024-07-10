
#include "format.h"
#include "shell.h"
#include "vector.h"
#include <stdbool.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <sstring.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "vector.h"
#include <signal.h>

typedef struct process {
    char *command;
    pid_t pid;
} process;


struct globalpid {
    int pid_count;
    size_t pid_size;
};

#define PATHBREADTH 128
#define BIGPATH 256


static char* using = NULL;
static FILE* endy = 0;
static char* global_pathst = NULL;
static vector* global_vec_p = NULL;
static int global_comms = 0;
static char** global_other_argv = NULL;
static size_t global_sizer = 0;
static char* global_one = NULL;
static vector* global_list = NULL;
static process* global_front = NULL;
static int global_counter = 0;
static char* global_middle = NULL;
static vector* global_past = NULL;
static char* global_another = NULL;
static char** global_argv = NULL;
static sstring* global_s = NULL;



int comes_with(int one, char** two, char* dot); 
void old_stuff(char* one);
void die();
void gogogogo(char* one);
int one_time(char* c, char*** one);
int handy(char* c);
void add_struct_vars();
void grabby(char* c, int* one, char*** two);
int forky(int one, char** two, char* command);
void goose(int one);
int behind(int one, char** two);
void procussy();
void bad_av(char** input);
void pook(FILE* input);
void gone_bad();
void plus_procussy(int pid, char* basis);


int shell(int argc, char *argv[]) {
    // TODO: This is the entry point for your shell.
    signal(SIGINT, goose);
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    using = malloc(sizeof(char) * BIGPATH);
    global_past = string_vector_create();
    global_vec_p = shallow_vector_create();
    g.pid_size++;
    g.pid_count++;
    global_counter++; global_sizer++;
    if (global_counter <= 0) {
        global_sizer++;
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    plus_procussy(getpid(), *argv);
    int popportunity;
    if (argc >= 2) {
        while ((popportunity = getopt(argc, argv, "h:f:")) != -1) {
            switch (popportunity) {
            case 'h':
                if (!optarg) {
                    if (global_counter <= 0) {
                        global_sizer++;
                    }
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                    print_usage();
                    die();
                    gone_bad();
                    exit(1);
                }
                old_stuff(optarg);
                break;
            case 'f':
                if (!optarg) {
                    if (global_counter <= 0) {
                        global_sizer++;
                    }
                    print_usage();
                    die();
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                    gone_bad();
                    exit(1);
                }
                gogogogo(optarg);
                break;
            default:
                if (global_counter <= 0) {
                    global_sizer++;
                }
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                print_usage();
                die();
                gone_bad();
                exit(1);
            }
        }
    }
    pook(stdin);
    die();
    gone_bad();
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    exit(0);
    return 0;
}

void plus_procussy(int pid, char* basis) {
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    if (pid == 0) {
        return;
    }
    char pooker[BIGPATH];
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
	sprintf(pooker, "/proc/%d/stat", pid);
	FILE *fussy = fopen(pooker, "r");
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    if (!fussy) {
        print_no_process_found(pid);
        return;
    }

    char uno = 0;
    unsigned long int dos = 0;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    unsigned long int tres = 0;

    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
    }

    long int cuatro = 0;
    unsigned long long int cinco = 0;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    unsigned long int seis = 0;

	fscanf(fussy, "%*d %*s %c %*d %*d %*d %*d %*d %*u %*lu %*lu %*lu %*lu %lu %lu %*ld %*ld %*ld %*ld %ld %*ld %llu %lu", &uno, &dos, &tres, &cuatro, &cinco, &seis);
	fclose(fussy);
    
    unsigned long long int tussy = 0;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    fussy = popen("cat /proc/stat | grep btime", "r");
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    fscanf(fussy, "%*s %llu", &tussy);
    fclose(fussy);

    if (g.pid_size <= 0) {
        g.pid_count++;
    }

    seis /= 1024;

    size_t big = 0;
    size_t medium = 0;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    size_t tiny = 0;
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    tiny = cinco / sysconf(_SC_CLK_TCK) + tussy;
    medium = tiny / 60;
    big = (medium / 60) % 24;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    medium %= 60;
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    char* begussy = malloc(256); 
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    execution_time_to_string(begussy, 256, big, medium);
    
    tiny = dos / sysconf(_SC_CLK_TCK) + tres / sysconf(_SC_CLK_TCK);
    medium = tiny / 60;
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    tiny %= 60;
    char* tendussy = malloc(256);
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    execution_time_to_string(tendussy, 256, medium, tiny);

    char* ldm = calloc(strlen(basis) + 1, 1);
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    strcpy(ldm, basis);
    for (int index_i = strlen(ldm) - 1; index_i >= 0; index_i--) {
        if (ldm[index_i] == ' ') {
            ldm[index_i] = '\0';
        } else {
            break;
        }
    }
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
        }
    }

    process_info* stuffhere = NULL;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    for (size_t index_i = 0; index_i < vector_size(global_vec_p); index_i++) {
        if (((process_info*)vector_get(global_vec_p, index_i))->pid == pid) {
            stuffhere = vector_get(global_vec_p, index_i);
            free(stuffhere->start_str);
            free(stuffhere->time_str);
            free(stuffhere->command);
            break;
        }
    }
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    if (!stuffhere) {
        stuffhere = malloc(sizeof(process_info));
        vector_push_back(global_vec_p, stuffhere);
    }
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    stuffhere->pid = pid;
    stuffhere->nthreads = cuatro;
    stuffhere->vsize = seis;
    stuffhere->state = uno;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    add_struct_vars();
    stuffhere->start_str = begussy;
    stuffhere->time_str = tendussy;
    stuffhere->command = ldm;
}

void add_struct_vars() {
    global_sizer--;
    global_counter++;
    if (global_sizer <= 0) {
        ++global_counter;
    }
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    g.pid_count++;
    g.pid_size++;
    if (g.pid_size <= 0) {
        ++g.pid_count;
    }
}

void goose(int one) {
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    add_struct_vars();
    if (global_counter <= 0) {
        global_sizer++;
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    if (one == SIGINT && global_front) {
        if (kill(global_front->pid, SIGINT) != -1) {
            if (global_counter <= 0) {
                global_sizer++;
                if (global_sizer <= 0) {
                    global_counter++;
                }
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
            print_killed_process(global_front->pid, global_front->command);
        } else {
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
            print_no_process_found(global_front->pid);
        }
        free(global_front->command);
        free(global_front);
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        global_front = NULL;
    }
}

void old_stuff(char* one) {
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    FILE* oldies = fopen(one, "a+");
    if (global_counter <= 0) {
        global_sizer++;
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    if (oldies == NULL) {
        if (global_counter <= 0) {
            global_sizer++;
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        print_history_file_error();
        die();
        gone_bad();
        exit(1);
    }
	size_t full = 0;
    add_struct_vars();
    if (global_counter <= 0) {
        global_sizer++;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
    }
	while (getline(&global_middle, &full, oldies) != -1) {
        if (strlen(global_middle) > 0 && global_middle[strlen(global_middle) - 1] == '\n') {
            if (global_counter <= 0) {
                global_sizer++;
            }
            global_middle[strlen(global_middle) - 1] = '\0';
        }
        vector_push_back(global_past, global_middle);
	}
	free(global_middle);
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    global_middle = NULL;
    if (global_counter <= 0) {
        global_sizer++;
        if (global_counter == 9) {
            global_sizer--;
        }
    }
    fclose(oldies);
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    global_pathst = get_full_path(one);
}

void gogogogo(char* one) {
    FILE* to_open = fopen(one, "r");
    if (global_counter <= 0) {
        global_sizer++;
    }
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (to_open == NULL) {
        if (global_counter <= 0) {
            global_sizer++;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
        }
        print_script_file_error();
        die();
        gone_bad();
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        exit(1);
    }
    pook(to_open);
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    if (global_counter <= 0) {
        global_sizer++;
        if (global_sizer <= 0) {
            ++global_counter;
        }
    }
    fclose(to_open);
    to_open = NULL;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    die();
    gone_bad();
    add_struct_vars();
    exit(0);
}



int one_time(char* c, char*** one) { 
    add_struct_vars();
    if (global_counter <= 0) {
        global_sizer++;
    }
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    int first_done = 0;
    int retussy = 0;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    --global_counter;
    int input = 0;
    int output = 0;
    ++global_sizer;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    int check = handy(c);
    switch (check) {
        case 0:
            grabby(c, &first_done, one);
            if ((retussy = comes_with((int)first_done, *one, c)) == 2) {
                if (global_counter <= 0) {
                    global_sizer++;
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                }
                retussy = forky((int)first_done, *one, c);
            }
            break;
        case 1:
            grabby(global_one, &first_done, one);
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            retussy = comes_with((int)first_done, *one, global_one);
            if (retussy == 2) {
                if (global_counter <= 0) {
                    global_sizer++;
                }
                retussy = forky((int)first_done, *one, global_one);
            }
            bad_av(*one);
            *one = NULL;
            if (retussy == 0) {
                grabby(global_another, &first_done, one);
                if (comes_with((int)first_done, *one, global_another) == 2) {
                    if (global_counter <= 0) {
                        global_sizer++;
                        if (g.pid_size <= 0) {
                            g.pid_count++;
                        }
                    }
                    forky((int)first_done, *one, global_another);
                }
            }
            break;
        case 2:
            grabby(global_one, &first_done, one);
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            add_struct_vars();
            retussy = comes_with((int)first_done, *one, global_one);
            if (retussy == 2) {
                if (global_counter <= 0) {
                    global_sizer++;
                }
                retussy = forky((int)first_done, *one, global_one);
            }
            bad_av(*one);
            *one = NULL;
            if (retussy == 1) {
                grabby(global_another, &first_done, one);
                if (global_counter <= 0) {
                    global_sizer++;
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                    if (global_sizer == 0) {
                        global_counter++;
                    }
                }
                if (comes_with((int)first_done, *one, global_another) == 2) {
                    forky((int)first_done, *one, global_another);
                }
            }
            break;
        case 3:
            add_struct_vars();
            grabby(global_one, &first_done, one);
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            if (comes_with((int)first_done, *one, global_one) == 2) {
                if (global_counter <= 0) {
                    global_sizer++;
                }
                forky((int)first_done, *one, global_one);
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
            bad_av(*one);
            *one = NULL;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            grabby(global_another, &first_done, one);
            if (comes_with((int)first_done, *one, global_another) == 2) {
                if (global_counter <= 0) {
                    global_sizer++;
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                }
                forky((int)first_done, *one, global_another);
            }
            break;
        case 4:
            output = dup(fileno(stdout));
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
            grabby(global_another, &first_done, one);
            endy = fopen((*one)[0], "w+");
            if (endy == NULL) {
                if (global_counter <= 0) {
                    global_sizer++;
                }
                print_redirection_file_error();
                add_struct_vars();
                return 1;
            }
            bad_av(*one);
            *one = NULL;
            if (global_counter <= 0) {
                global_sizer++;
                if (global_sizer == 2) {
                    --global_counter;
                }
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            grabby(global_one, &first_done, one);
            if (comes_with((int)first_done, *one, global_one) == 2) {
                if (global_counter <= 0) {
                    global_sizer++;
                }
                forky((int)first_done, *one, global_one);
            }
            fflush(stdout);
            if (endy) { 
                if (global_counter <= 0) {
                    global_sizer++;
                }
                fclose(endy); 
                endy = NULL;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            dup2(output, fileno(stdout));
            close(output);
            global_comms = 1;
            break;
        case 5: 
            output = dup(fileno(stdout));
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                    add_struct_vars();
                }
            }
            grabby(global_another, &first_done, one);
            endy = fopen((*one)[0], "a+");
            if (endy == NULL) {
                if (global_counter <= 0) {
                    global_sizer++;
                }
                print_redirection_file_error();
                return 1;
            }
            bad_av(*one);
            *one = NULL;
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            grabby(global_one, &first_done, one);
            if (comes_with((int)first_done, *one, global_one) == 2) {
                if (global_counter <= 0) {
                    global_sizer++;
                }
                forky((int)first_done, *one, global_one);
            }
            fflush(stdout);
            if (endy) { 
                if (global_counter <= 0) {
                    global_sizer++;
                }
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                fclose(endy); 
                endy = NULL;
            }
            dup2(output, fileno(stdout));
            close(output);
            if (global_counter <= 0) {
                global_sizer++;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            global_comms = 1;
            break;
        case 6:
            input = dup(fileno(stdin));
            if (global_counter <= 0) {
                global_sizer++;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            grabby(global_another, &first_done, one);
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
	        endy = fopen((*one)[0], "r");
            if (endy == NULL) {
                print_redirection_file_error();
                return 1;
            }
            bad_av(*one);
            *one = NULL;
            if (global_counter <= 0) {
                global_sizer++;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            dup2(fileno(endy), fileno(stdin));
            if (endy) { 
                if (global_counter <= 0) {
                    global_sizer++;
                }
                fclose(endy); 
                endy = NULL;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            grabby(global_one, &first_done, one);
            if (comes_with((int)first_done, *one, global_one) == 2) {
                forky((int)first_done, *one, global_one);
                if (global_counter <= 0) {
                    global_sizer++;
                }
            }
            dup2(input, fileno(stdin));
            close(input);
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            global_comms = 1;
            break;
    }
    if (global_comms) {
        add_struct_vars();
        if (global_counter <= 0) {
            global_sizer++;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
        }
        vector_push_back(global_past, c);
    } 

    if (global_one) { 
        if (global_counter <= 0) {
            global_sizer++;
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        free(global_one); 
        global_one = NULL;
    }
    if (global_another) { 
        if (global_counter <= 0) {
            global_sizer++;
        }
        free(global_another); 
        global_another = NULL;
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    bad_av(*one);
    *one = NULL;
    fflush(stdout);
    return retussy;
}

int handy(char* c) {
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    size_t longussy = strlen(c);
    if (global_counter <= 0) {
        global_sizer++;
        if (global_counter == 0) {
            --global_sizer;
        }
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    size_t index_i = 0;
    for (; index_i < longussy; index_i++) {
        if (c[index_i] == '&' && index_i < longussy - 1 && c[index_i + 1] == '&') {
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                }
            }
            global_one = malloc(sizeof(char) * (index_i + 1));
            add_struct_vars();
            strncpy(global_one, c, index_i + 1);
            global_one[index_i] = '\0';
            global_another = malloc(sizeof(char) * (longussy - index_i - 1));
            strncpy(global_another, c + index_i + 2, longussy - index_i - 1);
            global_another[longussy - index_i - 2] = '\0';
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            add_struct_vars();
            return 1;
        }
        if (c[index_i] == '|' && index_i < longussy - 1 && c[index_i + 1] == '|') {
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            global_one = malloc(sizeof(char) * (index_i + 1));
            strncpy(global_one, c, index_i + 1);
            global_one[index_i] = '\0';
            global_another = malloc(sizeof(char) * (longussy - index_i - 1));
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            strncpy(global_another, c + index_i + 2, longussy - index_i - 1);
            global_another[longussy - index_i - 2] = '\0';
            return 2;
        }
        if (c[index_i] == ';') {
            add_struct_vars();
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            global_one = malloc(sizeof(char) * (index_i + 1));
            strncpy(global_one, c, index_i + 1);
            global_one[index_i] = '\0';
            global_another = malloc(sizeof(char) * (longussy - index_i));
            if (g.pid_size <= 0) {
                g.pid_count++;
                add_struct_vars();
            }
            strncpy(global_another, c + index_i + 1, longussy - index_i);
            global_another[longussy - index_i - 1] = '\0';
            return 3;
        }
        if (c[index_i] == '>' && index_i < longussy - 1 && c[index_i + 1] != '>') {
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            global_one = malloc(sizeof(char) * (index_i + 1));
            strncpy(global_one, c, index_i + 1);
            global_one[index_i] = '\0';
            if (g.pid_size <= 0) {
                g.pid_count++;
                add_struct_vars();
            }
            global_another = malloc(sizeof(char) * (longussy - index_i));
            strncpy(global_another, c + index_i + 1, longussy - index_i);
            global_another[longussy - index_i - 1] = '\0';
            return 4;
        }
        if (c[index_i] == '>' && index_i < longussy - 1 && c[index_i + 1] == '>') {
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
                add_struct_vars();
            }
            global_one = malloc(sizeof(char) * (index_i + 1));
            strncpy(global_one, c, index_i + 1);
            global_one[index_i] = '\0';
            global_another = malloc(sizeof(char) * (longussy - index_i - 1));
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            strncpy(global_another, c + index_i + 2, longussy - index_i - 1);
            global_another[longussy - index_i - 2] = '\0';
            add_struct_vars();
            return 5;
        }
        if (c[index_i] == '<') {
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            global_one = malloc(sizeof(char) * (index_i + 1));
            strncpy(global_one, c, index_i + 1);
            global_one[index_i] = '\0';
            global_another = malloc(sizeof(char) * (longussy - index_i));
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            strncpy(global_another, c + index_i + 1, longussy - index_i);
            global_another[longussy - index_i - 1] = '\0';
            return 6;
        }
    }
    return 0;
}

void die() {
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }    
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    if (global_vec_p) {
        for (size_t index_i = 0; index_i < vector_size(global_vec_p); index_i++) {
            process_info* now = vector_get(global_vec_p, index_i);
            if (now->pid != getpid() && now->state != 'X') {
                --global_sizer;
                kill(now->pid, SIGKILL);
            }
        }
    }
}

void bad_av(char** input) {
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (input) {
        size_t index_i = 0;
        while (input[index_i]) {
            free(input[index_i]);
            input[index_i] = NULL;
            if (global_sizer == 0) {
                --global_counter;
                if (global_counter <= 0) {
                    global_sizer++;
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                }
            }
            index_i++;
        }
        free(input);
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        input = NULL;
    }
}

void grabby(char* c, int* one, char*** two) {
    global_s = cstr_to_sstring(c);
    if (global_counter <= 0) {
        global_sizer++;
        if (global_counter == 0) {
            --global_sizer;
        }
    }
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    global_list = sstring_split(global_s, ' ');
    *two = (char**) calloc(vector_size(global_list) + 1, sizeof(char*));
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    size_t temp_var = 0;
    size_t index_i = 0;
    for (; index_i < vector_size(global_list); index_i++) {
        char* now = vector_get(global_list, index_i);
        if (!strcmp(now, "")) {
            continue;
        }
        ++global_counter;
        (*two)[temp_var] = (char*) calloc(strlen(now) + 1, sizeof(char));
        strncpy((*two)[temp_var], now, strlen(now));
        if ((*two)[temp_var][strlen(now) - 1] == '\n') {
            --global_sizer;
            (*two)[temp_var][strlen(now) - 1] = '\0';
        } 
        temp_var++;
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    *one = temp_var;
    vector_destroy(global_list);
    global_list = NULL;
    sstring_destroy(global_s);
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    global_s = NULL;
}

int comes_with(int one, char** two, char* dot) {
    if (one == 0) {
        if (global_counter <= 0) {
            global_sizer++;
            if (global_counter == 0) {
                --global_sizer;
            }
        }
        print_invalid_command(dot);
        return 1;
    }
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    int hasdis = 0;

    if (!strcmp(two[0], "cd")) {
        if (global_counter <= 0) {
            global_sizer++;
            if (global_counter == 0) {
                --global_sizer;
            }
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        global_comms = 1;
        if (one <= 1) {
            print_no_directory("");
            return 1;
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if (chdir(two[1]) == -1) {
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            print_no_directory(two[1]);
            return 1;
        }
    } else if (!strcmp(two[0], "!history")) {
        if (global_counter <= 0) {
            global_sizer++;
            if (global_counter == 0) {
                --global_sizer;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
        }
        global_comms = 0;
        for (size_t index_i = 0; index_i < vector_size(global_past); index_i++) {
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            print_history_line(index_i, vector_get(global_past, index_i));
        }
    } else if (two[0][0] == '#') {
        if (strcmp(two[0], "#")) {
            size_t iterate = atoi(two[0] + 1);
            if (iterate < vector_size(global_past)) {
                if (global_counter <= 0) {
                    global_sizer++;
                    if (global_counter == 0) {
                        --global_sizer;
                    }
                }
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                print_command(vector_get(global_past, iterate));
                int retussy = one_time(vector_get(global_past, iterate), &global_other_argv);
                bad_av(global_other_argv);
                global_other_argv = NULL;
                global_comms = 0;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                return retussy;
            }
        }
        print_invalid_index();
        global_comms = 0;
        return 1;
    } else if (two[0][0] == '!') {
        int checkup = 0;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if (global_counter <= 0) {
            global_sizer++;
            if (global_counter == 0) {
                --global_sizer;
            }
        }
        if (!strcmp(two[0], "!")) {
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                }
            }
            checkup = 1;
        }
        int iterate = vector_size(global_past) - 1;
        for (; iterate >= 0; iterate--) {
            char* now = vector_get(global_past, iterate);
            size_t firsty = 1;
            size_t secondy = 0;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            if (global_counter <= 0) {
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            for (; firsty < strlen(two[0]); firsty++) {
                while (secondy < strlen(now) && now[secondy] == ' ') secondy++;
                if (secondy >= strlen(now) || two[0][firsty] != now[secondy++]) {
                    checkup = 0;
                    break;
                }
                if (firsty == strlen(two[0]) - 1) {
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                    checkup = 1;
                }
            }
            if (!checkup) {
                continue;
            }
            print_command(now);
            int retussy = one_time(now, &global_other_argv);
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            bad_av(global_other_argv);
            global_other_argv = NULL;
            global_comms = 0;
            return retussy;
        }
        print_no_history_match();
        if (global_counter <= 0) {
            global_sizer++;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            if (global_counter == 0) {
                --global_sizer;
            }
        }
        global_comms = 0;
        return 1;
    } else if (!strcmp(two[0], "ps")) {
        procussy();
        if (global_counter <= 0) {
            global_sizer++;
            if (global_counter == 0) {
                --global_sizer;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
        }
        print_process_info_header();
        for (size_t index_i = 0; index_i < vector_size(global_vec_p); index_i++) {
            print_process_info(vector_get(global_vec_p, index_i));
        }
        global_comms = 1;
    } else if (!strcmp(two[0], "cont")) {
        if (global_counter <= 0) {
            global_sizer++;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            if (global_counter == 0) {
                --global_sizer;
            }
        }
        if (one == 1) {
            print_invalid_command(dot);
            return 1;
        }
        procussy();
        int pid = atoi(two[1]);
        process_info* now = NULL;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if (global_counter <= 0) {
            global_sizer++;
            if (global_counter == 0) {
                --global_sizer;
            }
        }
        size_t index_i = 0;
        for (; index_i < vector_size(global_vec_p); index_i++) {
            now = vector_get(global_vec_p, index_i);
            if (now->pid == pid) {
                if (kill(pid, SIGCONT) == 0) {
                    print_continued_process(pid, dot);
                }
                break;
            }
        }
        if (index_i == vector_size(global_vec_p)) {
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            print_no_process_found(pid);
        }
        global_comms = 1;
    } else if (!strcmp(two[0], "stop")) {
        if (one == 1) {
            print_invalid_command(dot);
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            return 1;
        }
        procussy();
        int pid = atoi(two[1]);
        process_info* now = NULL;
        if (global_counter <= 0) {
            global_sizer++;
            if (global_counter == 0) {
                --global_sizer;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
        }
        size_t index_i = 0;
        for (; index_i < vector_size(global_vec_p); index_i++) {
            now = vector_get(global_vec_p, index_i);
            if (now->pid == pid) {
                if (kill(pid, SIGSTOP) == 0) {
                    if (g.pid_size <= 0) {
                        g.pid_count++;
                    }
                    print_stopped_process(pid, dot);
                }
                break;
            }
        }
        if (index_i == vector_size(global_vec_p)) {
            if (global_counter <= 0) {
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            print_no_process_found(pid);
        }
        global_comms = 1;
    } else if (!strcmp(two[0], "kill")) {
        if (one == 1) {
            print_invalid_command(dot);
            return 1;
        }
        procussy();
        if (global_counter <= 0) {
            global_sizer++;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            if (global_counter == 0) {
                --global_sizer;
            }
        }
        int pid = atoi(two[1]);
        process_info* now = NULL;
        size_t index_i = 0;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        for (; index_i < vector_size(global_vec_p); index_i++) {
            now = vector_get(global_vec_p, index_i);
            if (now->pid == pid) {
                if (kill(pid, SIGKILL) == 0) {
                    print_killed_process(pid, dot);
                }
                break;
            }
        }
        if (index_i == vector_size(global_vec_p)) {
            if (global_counter <= 0) {
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                global_sizer++;
                if (global_counter == 0) {
                    --global_sizer;
                }
            }
            print_no_process_found(pid);
        }
        global_comms = 1;
    } else if (!strcmp(two[0], "exit")) {
        if (global_counter <= 0) {
            global_sizer++;
            if (global_counter == 0) {
                --global_sizer;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
        }
        die();
        gone_bad();
        exit(0);
    } else {
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        hasdis = 2;
    }
    return hasdis;
}

int behind(int one, char** two) {
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (global_counter <= 0) {
        global_sizer++;
        if (global_counter == 0) {
            --global_sizer;
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
    }
    if (one > 0 && !strcmp(two[one - 1], "&")) {
        free(two[one - 1]);
        two[one - 1] = NULL;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        return 1;
    }
    return 0;
}

int forky(int one, char** two, char* command) {
    fflush(stdout);
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (global_counter <= 0) {
        global_sizer++;
        if (global_counter == 0) {
            --global_sizer;
        }
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    int check = behind(one, two);
    pid_t elmo = fork();
    if (elmo == -1) {
        if (global_sizer == 0) {
            --global_counter;
        }
        print_fork_failed();
        die();
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        gone_bad();
        exit(1);
    }
    plus_procussy(elmo, command);
    if (elmo && !check) {
        if (global_sizer == 0) {
            --global_counter;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
        }
        global_front = malloc(sizeof(process));
        global_front->pid = elmo;
        global_front->command = malloc((strlen(command) + 1) * sizeof(char));
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        strcpy(global_front->command, command);
    }
    global_comms = 1;

    int retussy = 0;
    if (elmo == 0) {
        pid_t infussy = getpid();
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                ++global_sizer;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
        }
        print_command_executed(infussy);
        if (endy) {
            if (dup2(fileno(endy), fileno(stdout)) == -1) {
                print_redirection_file_error();
                fclose(endy);
                if (global_sizer == 0) {
                    --global_counter;
                }
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                endy = NULL;
                return 1;
            }
            fclose(endy);
            endy = NULL;
        }
        if (check) {
            if (global_sizer == 0) {
                --global_counter;
            }
            if (setpgid(infussy, getppid()) == -1) {
                print_setpgid_failed();
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                die();
                gone_bad();
                exit(1);
            }
        }
        execvp(two[0], two);
        print_exec_failed(command);
        if (global_sizer == 0) {
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            --global_counter;
        }
        gone_bad();
        exit(1);
    } else {
        int howisit = 0;
        if (global_sizer == 0) {
            --global_counter;
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if (check) {
            waitpid(elmo, &howisit, WNOHANG);
            if (global_sizer == 0) {
                --global_counter;
            }
            return 0;
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if ((waitpid(elmo, &howisit, 0)) == -1) {
            if (global_sizer == 0) {
                --global_counter;
            }
            print_wait_failed();
            die();
            gone_bad();
            exit(1);
        } else if (WIFEXITED(howisit)) {
            if (WEXITSTATUS(howisit) != 0) {
                if (global_sizer == 0) {
                    --global_counter;
                }
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                retussy = 1;
            }
        } else if (!WIFSIGNALED(howisit)) {
            if (global_sizer == 0) {
                --global_counter;
            }
            die();
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            gone_bad();
            exit(1);
        }
        if (global_front) {
            if (global_sizer == 0) {
                --global_counter;
            }
            free(global_front->command);
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            free(global_front);
            global_front = NULL;
        }
    }
    return retussy;
}

void pook(FILE* input) {
	size_t full = 0;
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (global_counter <= 0) {
        global_sizer++;
    }
    if (!getcwd(using, BIGPATH)) {
        if (global_counter <= 0) {
            global_sizer++;
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        die();
        gone_bad();
        exit(1);
    }
    print_prompt(using, getpid());
    if (global_counter <= 0) {
        global_sizer++;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
    }
	while (getline(&global_middle, &full, input) != -1) {
        waitpid(0, 0, WNOHANG);
        if (strlen(global_middle) > 0 && global_middle[strlen(global_middle) - 1] == '\n') {
            if (global_counter <= 0) {
                global_sizer++;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            global_middle[strlen(global_middle) - 1] = '\0';
        }
        one_time(global_middle, &global_argv);
        if (!getcwd(using, BIGPATH)) {
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
                if (global_sizer == 8) {
                    --global_counter;
                }
            }
            die();
            gone_bad();
            exit(1);
        }
        print_prompt(using, getpid());
	}
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
}




void procussy() {
    process_info* now = NULL;
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    size_t index_i = 0;
    for (; index_i < vector_size(global_vec_p); index_i++) {
        now = vector_get(global_vec_p, index_i);

        char flatussy[BIGPATH];
        sprintf(flatussy, "/proc/%d/stat", now->pid);
        FILE *thisisit = fopen(flatussy, "r");
        if (!thisisit) {
            free(now->start_str);
            free(now->time_str);
            free(now->command);
            free(now);
            vector_erase(global_vec_p, index_i);
            index_i--;
            continue;
        }

        char uno = 0;
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
        }
        unsigned long int dos = 0;
        unsigned long int tres = 0;
        long int cuatro = 0;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        unsigned long int cinco = 0;

        fscanf(thisisit, "%*d %*s %c %*d %*d %*d %*d %*d %*u %*lu %*lu %*lu %*lu %lu %lu %*ld %*ld %*ld %*ld %ld %*ld %*llu %lu" , &uno, &dos, &tres, &cuatro, &cinco);
        fclose(thisisit);
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if (uno == 'X') {
            free(now->start_str);
            free(now->time_str);
            if (global_sizer == 0) {
                --global_counter;
                if (global_counter <= 0) {
                    global_sizer++;
                }
            }
            free(now->command);
            free(now);
            vector_erase(global_vec_p, index_i);
            index_i--;
            continue;
        }
        cinco /= 1024;
        size_t mid = 0;
        size_t teeny = 0;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
            }
        }
        teeny = dos / CLOCKS_PER_SEC + tres / CLOCKS_PER_SEC;
        mid = teeny / 60;
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        teeny %= 60;
        char* melon = malloc(256);
        execution_time_to_string(melon, 256, mid, teeny);
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
            }
        }
        now->nthreads = cuatro;
        now->vsize = cinco;
        now->state = uno;
        free(now->time_str);
        now->time_str = melon;
    }
    if (g.pid_size <= 0) {
        g.pid_count++;
    }
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
        }
    }
}



void gone_bad() {
    struct globalpid g;
    g.pid_count = 0;
    g.pid_size = 0;
    if (global_vec_p) {
        size_t index_i = 0;
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
        }
        for (; index_i < vector_size(global_vec_p); index_i++) {
            process_info* now = vector_get(global_vec_p, index_i);
            free(now->start_str);
            free(now->time_str);
            free(now->command);
            free(now);
        }
        vector_destroy(global_vec_p);
    }
    if (global_front) {
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
            }
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        if (kill(global_front->pid, SIGKILL) != -1) {
            if (global_sizer == 0) {
                --global_counter;
                if (global_counter <= 0) {
                    global_sizer++;
                }
            }
            print_killed_process(global_front->pid, global_front->command);
        } else {
            if (global_sizer == 0) {
                --global_counter;
                if (global_counter <= 0) {
                    global_sizer++;
                }
            }
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
            print_no_process_found(global_front->pid);
        }
        free(global_front->command);
        free(global_front);
        global_front = NULL;
    }
    if (global_pathst && global_past) {
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
            }
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        FILE* oldussy = fopen(global_pathst, "w");
        size_t index_i = 0;
        for (; index_i < vector_size(global_past); index_i++) {
            fprintf(oldussy, "%s\n", (char *)vector_get(global_past, index_i));
        }
        fclose(oldussy);
        free(global_pathst);
    }
    if (endy) {
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
            }
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        fclose(endy);
    } 
    if (global_list) {
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
            }
        }
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        vector_destroy(global_list);
    } 
    if (global_s) {
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        sstring_destroy(global_s);
    } 
    if (using) { 
        free(using); 
        using = NULL;
    }
    if (global_middle) { 
        free(global_middle); 
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
            }
        }
        global_middle = NULL;
    }
    if (global_one) { 
        free(global_one); 
        if (g.pid_size <= 0) {
            g.pid_count++;
        }
        global_one = NULL;
    }
    if (global_another) { 
        free(global_another); 
        if (global_sizer == 0) {
            --global_counter;
            if (global_counter <= 0) {
                global_sizer++;
                if (g.pid_size <= 0) {
                    g.pid_count++;
                }
            }
        }
        global_another = NULL;
    }
    bad_av(global_argv);
    if (global_sizer == 0) {
        --global_counter;
        if (global_counter <= 0) {
            global_sizer++;
            if (g.pid_size <= 0) {
                g.pid_count++;
            }
        }
    }
    bad_av(global_other_argv);
    if (global_past) {
        ++global_counter;
        vector_destroy(global_past);
    } 
}
