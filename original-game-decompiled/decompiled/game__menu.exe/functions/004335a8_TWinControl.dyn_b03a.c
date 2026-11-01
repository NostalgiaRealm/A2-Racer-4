
/* ==== TWinControl.dyn_b03a @ 004335a8 ==== 
 * signature: undefined TWinControl.dyn_b03a(void)
 * body: 004335a8-00433611;00433619-00433628
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b03a(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4335bd;
  iVar3 = (**(code **)(*param_1 + 0x54))();
  puStack_18 = (undefined1 *)0x4335c7;
  iVar4 = FUN_00402ee0(param_1);
  if (iVar3 == iVar4) {
    cVar1 = *(char *)((int)param_1 + 0x47);
    puStack_1c = &UNK_00433612;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00403178(param_1,0,*(int *)(param_2 + 8) + 0x44);
    puVar2 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x433623;
    if (cVar1 != '\0') {
      puStack_1c = (undefined *)0x433611;
      FUN_0042e978(param_1,uStack_20,puVar2);
    }
    return;
  }
  puStack_18 = (undefined1 *)0x433623;
  TControl_dyn_b03a(param_1,param_2);
  return;
}


