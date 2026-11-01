
/* ==== FUN_00401cf0 @ 00401cf0 ==== 
 * signature: undefined4 * __register FUN_00401cf0(uint param_1)
 * body: 00401cf0-00401d1e
 */

undefined4 * FUN_00401cf0(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004ac494;
  while( true ) {
    if ((undefined4 **)puVar1 == &DAT_004ac494) {
      DAT_004ac434 = 3;
      return (undefined4 *)0x0;
    }
    if (((uint)puVar1[2] <= param_1) && (param_1 < (uint)(puVar1[2] + puVar1[3]))) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


