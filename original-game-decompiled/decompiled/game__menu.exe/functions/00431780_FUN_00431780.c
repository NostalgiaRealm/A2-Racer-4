
/* ==== FUN_00431780 @ 00431780 ==== 
 * signature: undefined __register FUN_00431780(int param_1, int param_2)
 * body: 00431780-004317bb
 */

void FUN_00431780(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x134);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = puVar1[2];
  }
  if (param_2 < iVar2) {
    FUN_004102b0(puVar1,param_2);
  }
  else {
    FUN_004102b0(*(undefined4 **)(param_1 + 0x180),param_2 - iVar2);
  }
  return;
}


