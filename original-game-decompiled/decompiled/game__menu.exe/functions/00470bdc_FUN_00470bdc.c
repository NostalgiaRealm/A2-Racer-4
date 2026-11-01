
/* ==== FUN_00470bdc @ 00470bdc ==== 
 * signature: undefined __register FUN_00470bdc(int param_1, int * param_2)
 * body: 00470bdc-00470c68
 */

void FUN_00470bdc(int param_1,int *param_2)

{
  LPVOID pvVar1;
  SIZE_T SVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    puStack_18 = (undefined1 *)0x470c05;
    FUN_0046f92c(param_1);
  }
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  pvVar1 = GlobalLock(*(HGLOBAL *)(param_1 + 0x1fc));
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  SVar2 = GlobalSize(*(HGLOBAL *)(param_1 + 0x1fc));
  (**(code **)(*param_2 + 8))(param_2,pvVar1,SVar2);
  *in_FS_OFFSET = uStack_2c;
  uStack_2c = 0x470c68;
  GlobalUnlock(*(HGLOBAL *)(param_1 + 0x1fc));
  return;
}


