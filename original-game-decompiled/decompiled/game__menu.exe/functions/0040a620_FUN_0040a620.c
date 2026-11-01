
/* ==== FUN_0040a620 @ 0040a620 ==== 
 * signature: undefined4 __register FUN_0040a620(int param_1)
 * body: 0040a620-0040a669
 */

undefined4 FUN_0040a620(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  while( true ) {
    iVar2 = FUN_00403edc(param_1);
    if (iVar2 < iVar3) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + -1 + iVar3) & 0xdf;
    if (bVar1 == 0x44) {
      return 1;
    }
    if (bVar1 == 0x45) {
      return 2;
    }
    if (bVar1 == 0x4d) break;
    if (bVar1 == 0x59) {
      return 2;
    }
    iVar3 = iVar3 + 1;
  }
  return 0;
}


