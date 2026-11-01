
/* ==== FUN_0049ca08 @ 0049ca08 ==== 
 * signature: undefined FUN_0049ca08(void)
 * body: 0049ca08-0049ca4f
 */

undefined1 FUN_0049ca08(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0049c768(param_1);
  if (param_2 == *(int *)(iVar2 + 0x1c)) {
    iVar2 = FUN_0049c768(param_1);
    uVar1 = *(undefined1 *)(iVar2 + 0x20);
  }
  else {
    iVar2 = FUN_0049c768(param_1);
    if (param_2 == *(int *)(iVar2 + 0x28)) {
      uVar1 = *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 0x10);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


