
/* ==== FUN_0045bd2f @ 0045bd2f ==== 
 * signature: undefined1 __stdcall FUN_0045bd2f(int param_1, int param_2)
 * body: 0045bd2f-0045bd2f
 */

undefined1 FUN_0045bd2f(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_68 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  
  puStack_10 = &DAT_00709968;
  iVar3 = param_2 * 0xf0 + DAT_00715e50;
  iVar2 = *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  uStack_1c = *(undefined4 *)(iVar2 + 0x74);
  uStack_18 = *(undefined4 *)(iVar2 + 0x78);
  uStack_14 = *(undefined4 *)(iVar2 + 0x7c);
  uStack_28 = *(undefined4 *)(iVar3 + 0xbc);
  uStack_24 = *(undefined4 *)(iVar3 + 0xc0);
  uStack_20 = *(undefined4 *)(iVar3 + 0xc4);
  puVar4 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar5 = auStack_68;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = FUN_0045d170(7);
  return uVar1;
}


