
/* ==== FUN_0052f6e0 @ 0052f6e0 ==== 
 * signature: undefined __cdecl FUN_0052f6e0(int * param_1, int param_2, byte * param_3, int param_4)
 * body: 0052f6e0-0052f840
 */

void __cdecl FUN_0052f6e0(int *param_1,int param_2,byte *param_3,int param_4)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_0074c65c == 1) || (DAT_0074c65c == 2)) {
    if (param_3 != (byte *)0x0) {
      FUN_00558953(param_1,param_3);
    }
    if (DAT_0074c65c == 1) {
      iVar3 = DAT_0074c03c + -1;
      if (((*(int *)(param_4 + 0x18) == 0) || ((*(uint *)(param_4 + 0x50) & 0x10000) == 0)) ||
         (DAT_0074be18 == 0)) {
        if (*(int *)(param_4 + 0x28) == 0) {
          pdVar1 = FUN_0052a500(*(int **)(param_4 + 0x34));
          *(double **)(param_4 + 0x28) = pdVar1;
        }
        iVar4 = 0;
        if (0 < iVar3) {
          do {
            FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
      }
      else {
        iVar4 = iVar3;
        if (0 < iVar3) {
          do {
            FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    else {
      iVar3 = DAT_0074c03c;
      if ((param_2 == 0x18) && (DAT_0074be40 != 0)) {
        iVar3 = DAT_0074c03c + -1;
      }
      if (*(int *)(param_4 + 0x28) == 0) {
        uVar2 = FUN_00528400(param_4);
        *(undefined4 *)(param_4 + 0x28) = uVar2;
      }
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
    }
    if ((param_2 == 7) && (iVar3 == 2)) {
      FUN_00558953(param_1,&DAT_005c35d8);
      return;
    }
    FUN_00558953(param_1,&DAT_005ae60c);
  }
  return;
}


