
/* ==== FUN_00440610 @ 00440610 ==== 
 * signature: undefined4 __register FUN_00440610(int param_1, int param_2)
 * body: 00440610-00440635
 */

undefined4 FUN_00440610(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (param_2 != -1) {
    for (puVar2 = *(undefined4 **)(param_1 + 0x50);
        (puVar2 != (undefined4 *)0x0 && (param_2 != puVar2[1])); puVar2 = (undefined4 *)*puVar2) {
    }
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x54);
    }
    else {
      uVar1 = puVar2[2];
    }
  }
  return uVar1;
}


