
/* ==== FUN_00530e90 @ 00530e90 ==== 
 * signature: undefined __cdecl FUN_00530e90(int * param_1, int param_2)
 * body: 00530e90-0053109b
 */

void __cdecl FUN_00530e90(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_10;
  undefined4 local_c;
  
  *(int *)(param_2 + 0x48) = DAT_0074c6d0;
  if ((DAT_0074bef8 == 0) &&
     ((((*(uint *)(param_2 + 0x50) & 0x400) == 0 || (DAT_0074c690 == 0)) &&
      (iVar5 = *(int *)(param_2 + 0x38), iVar5 != 0)))) {
    piVar1 = *(int **)(iVar5 + 4);
    puVar3 = (undefined4 *)(iVar5 + 8);
    while (piVar1 != (int *)0x0) {
      iVar5 = piVar1[1];
      if (iVar5 == param_2) {
        iVar5 = piVar1[2];
      }
      if ((*(int *)(iVar5 + 0x48) != DAT_0074c6d0) &&
         ((DAT_0074bf88 == 0 || ((*(uint *)(iVar5 + 0x50) & 0x40000) != 0)))) {
        if (DAT_0074be44 == 0) {
          if (DAT_0074be48 < 0) {
            DAT_0074c6b4 = DAT_0074c6b4 + 1;
            FUN_00558953(param_1,(byte *)s___r_d_between_f_d_f_d_005c3938);
          }
          else {
            FUN_00558953(param_1,(byte *)s_OFF_3_1_1___f_d_005c3950);
          }
          iVar5 = *piVar1;
          if (iVar5 != 0) {
            iVar2 = *(int *)(iVar5 + 4);
            piVar1 = (int *)(iVar5 + 8);
            while (iVar2 != 0) {
              DAT_0074c968 = DAT_0074c968 + 1;
              FUN_005273a0(*(double **)(iVar2 + 8),param_2,(double *)&local_10);
              puVar4 = (undefined4 *)
                       FUN_005288f0(*(double **)(iVar2 + 8),param_2,
                                    (double)CONCAT44(local_c,local_10));
              iVar5 = 0;
              if (0 < DAT_0074c03c) {
                do {
                  if (iVar5 != DAT_0074be48) {
                    FUN_00558953(param_1,(byte *)s__8_4g_005c38d0);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < DAT_0074c03c);
              }
              FUN_00558953(param_1,&DAT_005ae60c);
              FUN_0051e2b0(puVar4,DAT_0074c5f4);
              iVar2 = *piVar1;
              piVar1 = piVar1 + 1;
            }
          }
          if (-1 < DAT_0074be48) {
            FUN_00558953(param_1,(byte *)s_3_0_1_2__8_4g__8_4g__8_4g_005c391c);
          }
        }
        else {
          FUN_00532480(param_1,param_2,iVar5,(int *)*piVar1);
        }
      }
      piVar1 = (int *)*puVar3;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


