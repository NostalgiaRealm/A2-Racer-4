
/* ==== FUN_00441b40 @ 00441b40 ==== 
 * signature: undefined __fastcall FUN_00441b40(int param_1)
 * body: 00441b40-00441ced
 */

void __fastcall FUN_00441b40(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar1 = (float *)(param_1 + 0x9c);
  pfVar2 = (float *)FUN_00441940(&local_14,0x49742400,0x49742400,0xc9742400,0xc9742400);
  pfVar5 = pfVar1;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar5 = pfVar5 + 1;
  }
  if (0 < DAT_00715258) {
    iVar4 = 0;
    iVar3 = DAT_00715258;
    do {
      pfVar2 = (float *)(iVar4 + 0x34 + DAT_00715f00);
      local_14 = *pfVar2;
      local_10 = pfVar2[1];
      local_c = pfVar2[2];
      if (local_14 < *pfVar1) {
        *pfVar1 = local_14;
        *(undefined1 *)(param_1 + 0xac) = 1;
      }
      if (*(float *)(param_1 + 0xa4) < local_14) {
        *(float *)(param_1 + 0xa4) = local_14;
        *(undefined1 *)(param_1 + 0xac) = 1;
      }
      if (local_c < *(float *)(param_1 + 0xa0)) {
        *(float *)(param_1 + 0xa0) = local_c;
        *(undefined1 *)(param_1 + 0xac) = 1;
      }
      if (*(float *)(param_1 + 0xa8) < local_c) {
        *(float *)(param_1 + 0xa8) = local_c;
        *(undefined1 *)(param_1 + 0xac) = 1;
      }
      iVar4 = iVar4 + 0x994;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(float *)(param_1 + 0xa4) - *pfVar1 <=
      *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa0)) {
    lVar6 = __ftol();
    *(undefined1 *)(param_1 + 0xac) = 1;
    *pfVar1 = *pfVar1 - (float)(int)lVar6;
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) + (float)(int)lVar6;
  }
  else {
    lVar6 = __ftol();
    *(undefined1 *)(param_1 + 0xac) = 1;
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) - (float)(int)lVar6;
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0xa8) + (float)(int)lVar6;
  }
  *(undefined1 *)(param_1 + 0xac) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(float *)(param_1 + 0xbc) = (*(float *)(param_1 + 0xa4) - *pfVar1) * 0.5 + *pfVar1;
  *(float *)(param_1 + 0xc4) =
       (*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa0)) * 0.5 + *(float *)(param_1 + 0xa0);
  return;
}


