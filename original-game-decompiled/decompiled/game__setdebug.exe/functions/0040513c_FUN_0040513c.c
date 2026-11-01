
/* ==== FUN_0040513c @ 0040513c ==== 
 * signature: undefined __register FUN_0040513c(undefined4 param_1)
 * body: 0040513c-0040515a
 */

void FUN_0040513c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004026b8(8);
  *puVar1 = DAT_00446018;
  puVar1[1] = param_1;
  DAT_00446018 = puVar1;
  return;
}


