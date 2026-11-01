
/* ==== FUN_004a6a80 @ 004a6a80 ==== 
 * signature: undefined4 __register FUN_004a6a80(int param_1, undefined4 param_2)
 * body: 004a6a80-004a6a8f;004a6aac-004a6aea
 */

undefined4 FUN_004a6a80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = *(undefined4 *)(param_1 + 8);
    break;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    break;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    break;
  case 3:
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    break;
  case 4:
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    break;
  case 5:
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    break;
  case 6:
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    break;
  default:
    uVar1 = 0xffffffff;
    FUN_00403c40("ill. index GetKeySettingByIndex");
  }
  return uVar1;
}


