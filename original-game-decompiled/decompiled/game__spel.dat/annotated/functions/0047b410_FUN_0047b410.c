
/* ==== FUN_0047b410 @ 0047b410 ==== 
 * signature: undefined __fastcall FUN_0047b410(int param_1)
 * body: 0047b410-0047b436
 */

void __fastcall FUN_0047b410(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(3);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


