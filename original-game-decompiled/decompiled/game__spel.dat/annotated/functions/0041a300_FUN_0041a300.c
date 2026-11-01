
/* ==== FUN_0041a300 @ 0041a300 ==== 
 * signature: undefined __cdecl FUN_0041a300(float param_1)
 * body: 0041a300-0041a51b
 */

void __cdecl FUN_0041a300(float param_1)

{
  double dVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  fVar2 = param_1;
  iVar7 = (int)param_1 * 0x294;
  iVar6 = (&DAT_005ce9e8)[(int)param_1 * 0xa5];
  param_1 = (float)(((&DAT_005cea38)[(int)param_1 * 0xa5] * 100) / (DAT_00715f04 * DAT_006fb8fc)) *
            0.1;
  if (0.0 <= param_1) {
    if (9.5 < param_1) {
      param_1 = 9.5;
    }
  }
  else {
    param_1 = 0.0;
  }
  FUN_005589b8((double)param_1);
  lVar8 = __ftol();
  iVar5 = *(int *)(&DAT_005cea0c + ((int)lVar8 + (int)fVar2 * 0xa5) * 4);
  dVar1 = (double)(param_1 + param_1);
  FUN_005589b8(dVar1);
  lVar8 = __ftol();
  if ((&DAT_005d2cb0)[(int)lVar8 + (&DAT_005973c0)[(int)fVar2 * 0x16] * 0x14] == -1) {
    FUN_005589b8(dVar1);
    lVar8 = __ftol();
    (&DAT_005d2cb0)[(int)lVar8 + (&DAT_005973c0)[(int)fVar2 * 0x16] * 0x14] =
         (&DAT_005973c8)[(int)fVar2 * 0x16];
    iVar3 = FUN_00426f60(&DAT_005d3460,iVar6);
    uVar4 = FUN_00425300(iVar3);
    FUN_005589b8(dVar1);
    lVar8 = __ftol();
    (&DAT_005d2ee0)[(int)lVar8 + (&DAT_005973c0)[(int)fVar2 * 0x16] * 0x14] = uVar4;
  }
  if (iVar5 != -1) {
    iVar3 = (&DAT_005973c8)[(int)fVar2 * 0x16];
    if (iVar5 < iVar3) {
      if (*(int *)(&DAT_005cea08 + iVar7) == 1) {
        return;
      }
      *(undefined4 *)(&DAT_005cea08 + iVar7) = 1;
      return;
    }
    if (iVar3 < iVar5) {
      if (*(int *)(&DAT_005cea08 + iVar7) == 2) {
        return;
      }
      *(undefined4 *)(&DAT_005cea08 + iVar7) = 2;
      return;
    }
    if (*(int *)(&DAT_005cea08 + iVar7) == 1) {
      if (iVar3 == DAT_005d2ab0) {
        return;
      }
      iVar5 = FUN_0041a280(iVar3 + 1);
      iVar6 = FUN_00407d20(*(int *)(iVar6 * 0xf0 + 0x34 + DAT_00715e50),
                           *(int *)(iVar5 * 0xf0 + 0x34 + DAT_00715e50));
      if (ABS((double)iVar6) < 5.0) {
        return;
      }
    }
  }
  *(undefined4 *)(&DAT_005cea08 + iVar7) = 0;
  return;
}


