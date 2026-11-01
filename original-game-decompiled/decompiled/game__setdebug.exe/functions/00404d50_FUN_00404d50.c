
/* ==== FUN_00404d50 @ 00404d50 ==== 
 * signature: int __register FUN_00404d50(int param_1)
 * body: 00404d50-00404d73
 */

int FUN_00404d50(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00446014;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return param_1;
    }
    if (((param_1 == puVar1[1]) || (param_1 == puVar1[2])) || (param_1 == puVar1[3])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[4];
}


