
/* ==== TBitmap.vmt_038 @ 0041ed5c ==== 
 * signature: undefined TBitmap.vmt_038(void)
 * body: 0041ed5c-0041edf2;0041ee0b-0041ee2e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBitmap_vmt_038(int *param_1,HPALETTE param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uStack_7c;
  undefined *puStack_78;
  undefined1 *puStack_74;
  undefined4 auStack_5c [21];
  HPALETTE pHStack_8;
  
  bVar5 = 0;
  iVar1 = param_1[8];
  if (param_2 != *(HPALETTE *)(iVar1 + 0x10)) {
    if ((param_2 == (HPALETTE)0x0) && (*(int *)(iVar1 + 4) == 1)) {
      FUN_0041756c(*(HGDIOBJ *)(iVar1 + 0x10));
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else {
      FUN_0041e0c4((int)param_1);
      FUN_0041e0d4((int)param_1);
      puVar3 = (undefined4 *)(iVar1 + 0x18);
      puVar4 = auStack_5c;
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      puStack_74 = (undefined1 *)0x41edc2;
      pHStack_8 = FUN_0041d0e4(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),param_2,0,
                               (int)auStack_5c);
      puStack_78 = &UNK_0041edf3;
      uStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_7c;
      uVar6 = 0;
      puStack_74 = &stack0xfffffffc;
      FUN_0041e3e4((int)param_1,pHStack_8,param_2,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
                   auStack_5c);
      *in_FS_OFFSET = uVar6;
    }
    FUN_0041cfdc(*(HGDIOBJ *)(param_1[8] + 0x14),param_2,param_1[8] + 0x18);
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


