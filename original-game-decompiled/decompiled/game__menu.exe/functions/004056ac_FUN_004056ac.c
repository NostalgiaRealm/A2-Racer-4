
/* ==== FUN_004056ac @ 004056ac ==== 
 * signature: undefined __register FUN_004056ac(undefined4 param_1)
 * body: 004056ac-004056ca
 */

void FUN_004056ac(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0040277c(8);
  *puVar1 = DAT_004aa020;
  puVar1[1] = param_1;
  DAT_004aa020 = puVar1;
  return;
}


