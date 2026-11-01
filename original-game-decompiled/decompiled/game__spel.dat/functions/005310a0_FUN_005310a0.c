
/* ==== FUN_005310a0 @ 005310a0 ==== 
 * signature: undefined __cdecl FUN_005310a0(int * param_1, int param_2)
 * body: 005310a0-0053126e
 */

void __cdecl FUN_005310a0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *local_10;
  int *local_c;
  
  *(int *)(param_2 + 0x48) = DAT_0074c6d0;
  if ((DAT_0074bef8 == 0) &&
     ((((*(uint *)(param_2 + 0x50) & 0x400) == 0 || (DAT_0074c690 == 0)) &&
      (iVar3 = *(int *)(param_2 + 0x3c), iVar3 != 0)))) {
    iVar1 = *(int *)(iVar3 + 4);
    local_c = (int *)(iVar3 + 8);
    while (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x48) != DAT_0074c6d0) &&
         ((DAT_0074bf88 == 0 || ((*(uint *)(iVar1 + 0x50) & 0x40000) != 0)))) {
        local_10 = (int *)FUN_00514880(*(int **)(param_2 + 0x34),DAT_0074c03c,
                                       (int)local_c + (-8 - *(int *)(param_2 + 0x3c)) >> 2,0);
        if (DAT_0074be44 == 0) {
          if (DAT_0074be48 < 0) {
            DAT_0074c6b4 = DAT_0074c6b4 + 1;
            pcVar4 = s___ridge_between_f_d_f_d_005c3964;
          }
          else {
            pcVar4 = s_OFF_3_1_1___ridge_between_f_d_f__005c3980;
          }
          FUN_00558953(param_1,(byte *)pcVar4);
          if (local_10 != (int *)0x0) {
            iVar3 = local_10[1];
            piVar2 = local_10 + 2;
            while (iVar3 != 0) {
              iVar3 = 0;
              if (0 < DAT_0074c03c) {
                do {
                  if (iVar3 != DAT_0074be48) {
                    FUN_00558953(param_1,(byte *)s__8_4g_005c38d0);
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < DAT_0074c03c);
              }
              FUN_00558953(param_1,&DAT_005ae60c);
              iVar3 = *piVar2;
              piVar2 = piVar2 + 1;
            }
          }
          if (-1 < DAT_0074be48) {
            FUN_00558953(param_1,(byte *)s_3_0_1_2__8_4g__8_4g__8_4g_005c391c);
          }
        }
        else {
          FUN_00532480(param_1,param_2,iVar1,local_10);
        }
        FUN_005145f0(&local_10);
      }
      iVar1 = *local_c;
      local_c = local_c + 1;
    }
  }
  return;
}


