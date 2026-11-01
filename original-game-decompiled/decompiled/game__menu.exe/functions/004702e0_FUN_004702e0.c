
/* ==== FUN_004702e0 @ 004702e0 ==== 
 * signature: undefined FUN_004702e0(void)
 * body: 004702e0-00470372
 */

void FUN_004702e0(int param_1,int *param_2)

{
  SIZE_T dwBytes;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4702f4;
  FUN_0046fbf4(param_1);
  pcStack_1c = thunk_FUN_00403408;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  dwBytes = FUN_00412680(param_2);
  uStackY_2c = 0x470311;
  pvVar1 = GlobalAlloc(2,dwBytes);
  *(HGLOBAL *)(param_1 + 0x1fc) = pvVar1;
  if (pvVar1 == (HGLOBAL)0x0) {
    FUN_0040b5cc();
  }
  pvVar2 = GlobalLock(*(HGLOBAL *)(param_1 + 0x1fc));
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  uVar3 = FUN_00412680(param_2);
  (**(code **)(*param_2 + 4))(param_2,pvVar2,uVar3);
  *in_FS_OFFSET = uStackY_2c;
  uStackY_2c = 0x470372;
  GlobalUnlock(*(HGLOBAL *)(param_1 + 0x1fc));
  return;
}


