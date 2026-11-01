
/* ==== FUN_0041653c @ 0041653c ==== 
 * signature: undefined __register FUN_0041653c(int * param_1, byte * param_2)
 * body: 0041653c-00416580
 */

void FUN_0041653c(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  
  pcStack_10 = (code *)0x41654e;
  FUN_00416110((int)param_1);
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_00415b78(DAT_00447694,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00416588;
  pcStack_14 = (code *)0x416580;
  FUN_00416120((int)param_1);
  return;
}


