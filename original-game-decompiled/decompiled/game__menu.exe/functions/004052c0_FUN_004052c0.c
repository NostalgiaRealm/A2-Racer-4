
/* ==== FUN_004052c0 @ 004052c0 ==== 
 * signature: int __register FUN_004052c0(int param_1)
 * body: 004052c0-004052e3
 */

int FUN_004052c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_004aa01c;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return param_1;
    }
    if (((param_1 == puVar1[1]) || (param_1 == puVar1[2])) || (param_1 == puVar1[3])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[4];
}


