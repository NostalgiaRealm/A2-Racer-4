
/* ==== FUN_00491150 @ 00491150 ==== 
 * signature: int __cdecl FUN_00491150(int param_1, int param_2, int param_3)
 * body: 00491150-00491247
 */

int __cdecl FUN_00491150(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = param_2 + -0x78;
    iVar1 = param_3 + -0x78;
    *(undefined4 *)(param_3 + -0x74) = *(undefined4 *)(param_2 + -0x74);
    *(undefined4 *)(param_3 + -0x70) = *(undefined4 *)(param_2 + -0x70);
    *(undefined4 *)(param_3 + -0x6c) = *(undefined4 *)(param_2 + -0x6c);
    *(undefined4 *)(param_3 + -0x68) = *(undefined4 *)(param_2 + -0x68);
    *(undefined4 *)(param_3 + -100) = *(undefined4 *)(param_2 + -100);
    *(undefined4 *)(param_3 + -0x60) = *(undefined4 *)(param_2 + -0x60);
    *(undefined4 *)(param_3 + -0x5c) = *(undefined4 *)(param_2 + -0x5c);
    *(undefined4 *)(param_3 + -0x58) = *(undefined4 *)(param_2 + -0x58);
    *(undefined4 *)(param_3 + -0x54) = *(undefined4 *)(param_2 + -0x54);
    *(undefined4 *)(param_3 + -0x50) = *(undefined4 *)(param_2 + -0x50);
    *(undefined4 *)(param_3 + -0x4c) = *(undefined4 *)(param_2 + -0x4c);
    *(undefined4 *)(param_3 + -0x48) = *(undefined4 *)(param_2 + -0x48);
    *(undefined4 *)(param_3 + -0x44) = *(undefined4 *)(param_2 + -0x44);
    *(undefined4 *)(param_3 + -0x40) = *(undefined4 *)(param_2 + -0x40);
    *(undefined4 *)(param_3 + -0x3c) = *(undefined4 *)(param_2 + -0x3c);
    *(undefined4 *)(param_3 + -0x38) = *(undefined4 *)(param_2 + -0x38);
    *(undefined4 *)(param_3 + -0x34) = *(undefined4 *)(param_2 + -0x34);
    *(undefined4 *)(param_3 + -0x30) = *(undefined4 *)(param_2 + -0x30);
    *(undefined4 *)(param_3 + -0x2c) = *(undefined4 *)(param_2 + -0x2c);
    *(undefined4 *)(param_3 + -0x28) = *(undefined4 *)(param_2 + -0x28);
    *(undefined4 *)(param_3 + -0x24) = *(undefined4 *)(param_2 + -0x24);
    *(undefined4 *)(param_3 + -0x20) = *(undefined4 *)(param_2 + -0x20);
    *(undefined4 *)(param_3 + -0x1c) = *(undefined4 *)(param_2 + -0x1c);
    *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_3 = iVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return iVar1;
}


