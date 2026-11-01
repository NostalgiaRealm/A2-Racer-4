
/* ==== FUN_00420be4 @ 00420be4 ==== 
 * signature: undefined __register FUN_00420be4(void)
 * body: 00420be4-00420c9b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420be4(void)

{
  uint uVar1;
  float10 fVar2;
  float10 in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined2 in_stack_00000018;
  
  if ((in_stack_00000004 != (float10)0.0) &&
     (((float10)CONCAT28(in_stack_00000018,CONCAT44(in_stack_00000014,in_stack_00000010)) !=
       (float10)0.0 || (in_stack_00000004 <= (float10)0.0)))) {
    fVar2 = in_stack_00000004;
    FUN_00402aac();
    if ((fVar2 != (float10)0.0) || (_DAT_00420ca0 < ABS(in_stack_00000004))) {
      log2(CONCAT28(in_stack_00000018,CONCAT44(in_stack_00000014,in_stack_00000010)));
      FUN_00402a94();
    }
    else {
      uVar1 = FUN_00402ad4();
      FUN_00420ba4(uVar1);
    }
  }
  return;
}


