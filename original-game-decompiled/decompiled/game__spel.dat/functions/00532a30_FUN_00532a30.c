
/* ==== FUN_00532a30 @ 00532a30 ==== 
 * signature: undefined __cdecl FUN_00532a30(int * param_1, char * param_2, int param_3, int param_4, int param_5)
 * body: 00532a30-00532ad3
 */

void __cdecl FUN_00532a30(int *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  int local_14;
  
  if (param_4 != 0) {
    if (param_2 != (char *)0x0) {
      FUN_0055b2d9(param_2,param_1);
      if (param_5 != -1) {
        FUN_00558953(param_1,(byte *)s_p_d__005c4fcc);
      }
    }
    if (param_3 != 0) {
      local_14 = param_3;
      do {
        if (param_2 == (char *)0x0) {
          pcVar1 = s__6_16g_005c1958;
        }
        else {
          pcVar1 = s__8_4g_005c4fc4;
        }
        FUN_00558953(param_1,(byte *)pcVar1);
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    FUN_00558953(param_1,&DAT_005ae60c);
  }
  return;
}


