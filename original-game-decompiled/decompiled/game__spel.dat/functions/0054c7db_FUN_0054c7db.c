
/* ==== FUN_0054c7db @ 0054c7db ==== 
 * signature: undefined4 * __fastcall FUN_0054c7db(int param_1)
 * body: 0054c7db-0054c7e7
 */

undefined4 * __fastcall FUN_0054c7db(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)&DAT_0057629c;
  }
  return puVar1;
}


