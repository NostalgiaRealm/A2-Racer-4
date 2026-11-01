
/* ==== TBitmap.vmt_068 @ 0041c1ec ==== 
 * signature: undefined TBitmap.vmt_068(void)
 * body: 0041c1ec-0041c323
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBitmap_vmt_068(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HPALETTE pHVar4;
  HPALETTE pHVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  byte bVar10;
  undefined4 auStack_64 [6];
  undefined4 uStack_4c;
  
  bVar10 = 0;
  uVar3 = FUN_0041b75c((int)param_1);
  if (param_2 != (char)uVar3) {
    iVar1 = param_1[8];
    if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0x14) == 0)) {
      if (param_2 == '\x01') {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x30) = 0x28;
      }
    }
    else {
      if (param_2 == '\0') {
        if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 8))) {
          return;
        }
        FUN_0041b8a0((int)param_1);
        FUN_0041b920((int)param_1);
        FUN_0041b82c((int)param_1);
        if (*(int *)(iVar1 + 4) == 1) {
          uVar3 = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(iVar1 + 0x14) = 0;
          uVar2 = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)(iVar1 + 0x10) = 0;
          FUN_0041ba80((int)param_1,uVar3,uVar2,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
                       (undefined4 *)(iVar1 + 0x18));
        }
        else {
          FUN_0041b320((int)param_1,*(HBITMAP *)(iVar1 + 0x14),*(HPALETTE *)(iVar1 + 0x10),
                       (undefined4 *)(iVar1 + 0x18));
        }
      }
      else {
        if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
          return;
        }
        FUN_0041b8a0((int)param_1);
        FUN_0041b920((int)param_1);
        puVar7 = (undefined4 *)(iVar1 + 0x18);
        puVar8 = auStack_64;
        for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        uStack_4c = 0;
        bVar9 = *(int *)(iVar1 + 4) != 1;
        if (bVar9) {
          pHVar4 = FUN_0041af1c(*(HPALETTE *)(iVar1 + 0x10));
        }
        else {
          pHVar4 = *(HPALETTE *)(iVar1 + 0x10);
        }
        pHVar5 = FUN_0041a8c0(*(HBITMAP *)(iVar1 + 0x14),*(HPALETTE *)(iVar1 + 0x10),pHVar4,0,
                              (int)auStack_64);
        if (bVar9) {
          FUN_0041ba80((int)param_1,pHVar5,pHVar4,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
                       (undefined4 *)&stack0xffffff94);
        }
        else {
          *(HPALETTE *)(iVar1 + 8) = pHVar5;
        }
      }
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  return;
}


