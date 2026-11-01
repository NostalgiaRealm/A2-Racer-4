
/* ==== FUN_0042877e @ 0042877e ==== 
 * signature: undefined __cdecl FUN_0042877e(int param_1, void * param_2)
 * body: 0042877e-004288b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0042877e(int param_1,void *param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 * 0xf0 + 0xc4 + DAT_00715e50)) {
    iVar3 = 0;
    lVar2 = __ftol();
    FUN_00403080(param_2,(int)lVar2);
    fVar1 = *(float *)(&DAT_006b2b60 + DAT_006fbb40 * 4);
    if (0 < *(int *)((int)param_2 + 0x10)) {
      do {
        if ((float)*(int *)((int)param_2 + 0x1c) <= fVar1) break;
        iVar3 = iVar3 + 1;
        lVar2 = __ftol();
        FUN_00403080(param_2,(int)lVar2);
      } while (iVar3 < *(int *)((int)param_2 + 0x10));
    }
    if (*(int *)((int)param_2 + 0x10) <= iVar3) {
      FUN_00402f40(param_2,*(int *)((int)param_2 + 0x10) + -1);
      lVar2 = __ftol();
      FUN_00403080(param_2,(int)lVar2);
      goto LAB_0042889d;
    }
  }
  else {
    FUN_00403080(param_2,800);
    iVar3 = 0;
  }
  FUN_00402f40(param_2,iVar3);
LAB_0042889d:
  if (*(int *)((int)param_2 + 0x1c) < 800) {
    FUN_00403080(param_2,800);
  }
  return;
}


