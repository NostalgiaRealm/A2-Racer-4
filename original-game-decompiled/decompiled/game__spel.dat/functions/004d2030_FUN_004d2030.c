
/* ==== FUN_004d2030 @ 004d2030 ==== 
 * signature: undefined4 * __fastcall FUN_004d2030(int param_1)
 * body: 004d2030-004d203c
 */

undefined4 * __fastcall FUN_004d2030(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)&DAT_0057629c;
  }
  return puVar1;
}


