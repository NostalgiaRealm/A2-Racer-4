
/* ==== FUN_004033a4 @ 004033a4 ==== 
 * signature: int __register FUN_004033a4(int param_1, undefined4 param_2, char * param_3)
 * body: 004033a4-004033c9
 */

int FUN_004033a4(int param_1,undefined4 param_2,char *param_3)

{
  ULONG_PTR UStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (1 < DAT_004aa008) {
    UStack_10 = 0x4033b5;
    pcStack_c = param_3;
    uStack_8 = param_2;
    iStack_4 = param_1;
    FUN_00403384(param_1,param_2,param_3);
    RaiseException(0xeedfae1,0,1,&UStack_10);
    param_1 = iStack_4;
  }
  return param_1;
}


