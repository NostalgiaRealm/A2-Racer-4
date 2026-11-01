
/* ==== FUN_00401c2c @ 00401c2c ==== 
 * signature: undefined4 * __register FUN_00401c2c(uint param_1)
 * body: 00401c2c-00401c5a
 */

undefined4 * FUN_00401c2c(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0044748c;
  while( true ) {
    if ((undefined4 **)puVar1 == &DAT_0044748c) {
      DAT_0044742c = 3;
      return (undefined4 *)0x0;
    }
    if (((uint)puVar1[2] <= param_1) && (param_1 < (uint)(puVar1[2] + puVar1[3]))) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


