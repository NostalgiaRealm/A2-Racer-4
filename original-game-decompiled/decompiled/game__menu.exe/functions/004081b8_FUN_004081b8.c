
/* ==== FUN_004081b8 @ 004081b8 ==== 
 * signature: undefined __register FUN_004081b8(undefined4 param_1)
 * body: 004081b8-004081ec
 */

void FUN_004081b8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0040277c(0xc);
  *puVar1 = DAT_004aa140;
  puVar1[1] = *(undefined4 *)PTR_DAT_004ab61c;
  puVar1[2] = param_1;
  DAT_004aa140 = puVar1;
  *(code **)PTR_DAT_004ab61c = FUN_0040818c;
  return;
}


