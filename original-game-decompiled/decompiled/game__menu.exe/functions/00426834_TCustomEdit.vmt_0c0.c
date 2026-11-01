
/* ==== TCustomEdit.vmt_0c0 @ 00426834 ==== 
 * signature: undefined __register TCustomEdit.vmt_0c0(int * param_1, int * param_2)
 * body: 00426834-004268c1;004268c9-004268cf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomEdit_vmt_0c0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x42684b;
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  puStack_1c = (undefined1 *)0x426858;
  uVar2 = (**(code **)(*param_1 + 0xb8))();
  puStack_1c = (undefined1 *)0x426865;
  FUN_00403d44(param_2,(undefined4 *)0x0,uVar2);
  if (uVar2 != 0) {
    puStack_1c = (undefined1 *)0x426870;
    iVar3 = FUN_0042e6a8((int)param_1);
    puStack_1c = (undefined1 *)0x426876;
    piVar4 = FUN_00408d20(iVar3 + 1);
    pcStack_20 = thunk_FUN_004036bc;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    iVar3 = FUN_00408d34((int)piVar4);
    FUN_0042e6b8((int)param_1,piVar4,iVar3);
    FUN_004028d8((undefined4 *)((int)piVar4 + iVar1),(undefined4 *)*param_2,uVar2);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4268c9;
    pcStack_20 = (code *)0x4268c1;
    FUN_00408d6c((int)piVar4);
    return;
  }
  return;
}


