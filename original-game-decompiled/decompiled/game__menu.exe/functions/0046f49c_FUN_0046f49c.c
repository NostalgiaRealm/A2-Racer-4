
/* ==== FUN_0046f49c @ 0046f49c ==== 
 * signature: undefined __register FUN_0046f49c(int * param_1)
 * body: 0046f49c-0046f508;0046f516-0046f706;0046f71e-0046f73b
 */

void FUN_0046f49c(int *param_1)

{
  HGLOBAL hGlobal;
  int iVar1;
  uint uVar2;
  LPSTREAM *ppstm;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  int local_10 [2];
  int *local_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  local_10[1] = 0;
  local_10[0] = 0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  if (param_1[0x82] == 0) {
    pcStack_30 = thunk_FUN_00403408;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    puStack_2c = &stack0xfffffffc;
    FUN_00405860(local_10);
    piVar3 = (int *)local_8[0x80];
    iVar1 = (**(code **)(*piVar3 + 0x10))();
    *in_FS_OFFSET = piVar3;
    if ((iVar1 != 0) || (local_10[0] == 0)) {
      iVar1 = *(int *)local_8[0x80];
      uVar2 = (**(code **)(iVar1 + 0xc))(iVar1,piVar3,uVar4,(int *)local_8[0x80]);
      FUN_0046c2c0(uVar2);
    }
    hGlobal = (HGLOBAL)local_8[0x7f];
    if (hGlobal == (HGLOBAL)0x0) {
      uVar2 = (**(code **)(*(int *)local_8[0x81] + 0x20))();
      FUN_0046c2c0(uVar2);
    }
    else {
      ppstm = (LPSTREAM *)FUN_00405860(local_10 + 1);
      uVar2 = CreateStreamOnHGlobal(hGlobal,0,ppstm);
      FUN_0046c2c0(uVar2);
      uVar2 = (**(code **)(*(int *)local_8[0x81] + 0x14))();
      FUN_0046c2c0(uVar2);
      FUN_0046fbf4((int)local_8);
    }
    FUN_00405860(local_8 + 0x82);
    uVar2 = (*(code *)**(undefined4 **)local_8[0x80])();
    FUN_0046c2c0(uVar2);
    FUN_00405860(local_8 + 0x83);
    uVar2 = (*(code *)**(undefined4 **)local_8[0x80])();
    FUN_0046c2c0(uVar2);
    FUN_00405860(local_8 + 0x84);
    (*(code *)**(undefined4 **)local_8[0x80])();
    piVar3 = local_8;
    if (local_8 != (int *)0x0) {
      piVar3 = local_8 + 0x8e;
    }
    FUN_0046c2d8((undefined4 *)local_8[0x80],FUN_0046f77c,piVar3,local_8 + 0x87);
    iVar1 = local_8[0x7e];
    if (iVar1 != 0) {
      iVar1 = iVar1 + 8;
    }
    FUN_0046c2d8((undefined4 *)local_8[0x80],local_8[0x7c] + 0x10,iVar1,local_8 + 0x88);
    if ((*(byte *)(local_8[0x7c] + 0x2c) & 1) != 0) {
      (**(code **)(*local_8 + 0xbc))();
    }
    if ((*(byte *)(local_8[0x7c] + 0x2c) & 8) != 0) {
      (**(code **)(*local_8 + 0xbc))();
    }
    if ((*(byte *)(local_8[0x7c] + 0x2c) & 4) != 0) {
      (**(code **)(*local_8 + 0xbc))();
    }
    if ((*(byte *)(local_8[0x7c] + 0x2c) & 2) != 0) {
      (**(code **)(*local_8 + 0xbc))();
    }
    (**(code **)(*(int *)local_8[0x82] + 0x14))();
    FUN_0047119c();
    *in_FS_OFFSET = uStack_34;
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_0046f743;
  pcStack_24 = (code *)0x46f733;
  FUN_00405860(local_10);
  pcStack_24 = (code *)0x46f73b;
  FUN_00405860(local_10 + 1);
  return;
}


