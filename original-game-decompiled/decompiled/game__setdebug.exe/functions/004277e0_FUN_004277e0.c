
/* ==== FUN_004277e0 @ 004277e0 ==== 
 * signature: undefined __register FUN_004277e0(int param_1, int param_2)
 * body: 004277e0-0042781b
 */

void FUN_004277e0(int param_1,int param_2)

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
    FUN_0040f024(puVar1,param_2);
  }
  else {
    FUN_0040f024(*(undefined4 **)(param_1 + 0x180),param_2 - iVar2);
  }
  return;
}


