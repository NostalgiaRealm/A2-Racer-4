
/* ==== FUN_00404564 @ 00404564 ==== 
 * signature: undefined4 * __register FUN_00404564(int param_1, char * param_2)
 * body: 00404564-00404576
 */

undefined4 * FUN_00404564(int param_1,char *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004026b8(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00404228(puVar1,param_2);
  }
  return puVar1;
}


