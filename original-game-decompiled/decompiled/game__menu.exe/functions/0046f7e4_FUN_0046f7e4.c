
/* ==== FUN_0046f7e4 @ 0046f7e4 ==== 
 * signature: undefined __register FUN_0046f7e4(int param_1)
 * body: 0046f7e4-0046f8fd
 */

void FUN_0046f7e4(int param_1)

{
  int *piVar1;
  LPVOID *ppvVar2;
  uint uVar3;
  undefined4 uVar4;
  HRESULT HVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  int local_18 [2];
  OLECHAR local_10 [2];
  int *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10[0] = L'\0';
  local_10[1] = L'\0';
  local_18[1] = 0;
  local_18[0] = 0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(*(int *)(param_1 + 0x1f0) + 0x28) != 0)
     ) {
    puStack_1c = &stack0xfffffffc;
    ppvVar2 = (LPVOID *)FUN_00405860((int *)&local_c);
    uVar3 = CoGetClassObject(*(IID **)(local_8 + 0x1f0),5,(LPVOID)0x0,(IID *)&DAT_0046f90c,ppvVar2);
    FUN_0046c2c0(uVar3);
    FUN_004043bc(local_10,*(OLECHAR **)(*(int *)(local_8 + 0x1f0) + 0x28));
    FUN_00405808((undefined4 *)PTR_PTR_004ab63c,local_18 + 1);
    FUN_00405860((int *)(local_8 + 0x200));
    piVar1 = local_c;
    uVar6 = 0;
    uVar4 = (**(code **)(*local_c + 0x1c))();
    func_0x0046f78c(uVar4,piVar1);
  }
  else {
    FUN_00405808((undefined4 *)PTR_FUN_004ab95c,local_18);
    iVar7 = local_18[0];
    ppvVar2 = (LPVOID *)FUN_00405860((int *)(local_8 + 0x200));
    uVar6 = 0;
    HVar5 = CoCreateInstance(*(IID **)(local_8 + 0x1f0),(LPUNKNOWN)0x0,5,(IID *)&DAT_0046f91c,
                             ppvVar2);
    func_0x0046f78c(HVar5,iVar7);
  }
  *in_FS_OFFSET = uVar6;
  FUN_00403c80(local_18,2);
  FUN_004042b4((undefined4 *)local_10);
  FUN_00405860((int *)&local_c);
  return;
}


