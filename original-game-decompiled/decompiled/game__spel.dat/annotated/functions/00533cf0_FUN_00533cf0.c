
/* ==== FUN_00533cf0 @ 00533cf0 ==== 
 * signature: undefined __cdecl FUN_00533cf0(byte * param_1, undefined4 param_2, int param_3)
 * body: 00533cf0-00533dce
 */

void __cdecl FUN_00533cf0(byte *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  float10 fVar5;
  
  iVar3 = 0;
  if (DAT_0074c02c == 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__halfspace_int_005c54b0);
    FUN_0051e8e0(1,(int *)0x0);
  }
  iVar1 = param_3;
  DAT_0074c030 = _malloc(param_3 * 8);
  if (DAT_0074c030 == (double *)0x0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__insufficient_memory_005bd7f4);
    FUN_0051e8e0(4,(int *)0x0);
  }
  pdVar4 = DAT_0074c030;
  if (*param_1 != 0) {
    while( true ) {
      fVar5 = (float10)FUN_0051e030(&param_1,param_1,(uint *)&param_1);
      iVar3 = iVar3 + 1;
      if (iVar1 < iVar3) break;
      *pdVar4 = (double)fVar5;
      pdVar4 = pdVar4 + 1;
      if ((*param_1 == 0) || (param_1 = param_1 + 1, *param_1 == 0)) goto LAB_00533db5;
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_warning__more_coordi_005c546c);
  }
LAB_00533db5:
  if (iVar3 + 1 <= iVar1) {
    for (uVar2 = (iVar1 - (iVar3 + 1)) * 2 + 2U & 0x3ffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pdVar4 = 0;
      pdVar4 = (double *)((int)pdVar4 + 4);
    }
  }
  return;
}


