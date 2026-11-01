
/* ==== FUN_004181c4 @ 004181c4 ==== 
 * signature: undefined __register FUN_004181c4(int * param_1, byte * param_2)
 * body: 004181c4-00418208
 */

void FUN_004181c4(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  
  pcStack_10 = (code *)0x4181d6;
  FUN_00417d98((int)param_1);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_00417800(DAT_004ac69c,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00418210;
  pcStack_14 = (code *)0x418208;
  FUN_00417da8((int)param_1);
  return;
}


