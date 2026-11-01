
/* ==== FUN_0040311c @ 0040311c ==== 
 * signature: int __register FUN_0040311c(int param_1, undefined4 param_2, char * param_3)
 * body: 0040311c-00403141
 */

int FUN_0040311c(int param_1,undefined4 param_2,char *param_3)

{
  ULONG_PTR UStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (1 < DAT_00446008) {
    UStack_10 = 0x40312d;
    pcStack_c = param_3;
    uStack_8 = param_2;
    iStack_4 = param_1;
    FUN_004030fc(param_1,param_2,param_3);
    RaiseException(0xeedfae1,0,1,&UStack_10);
    param_1 = iStack_4;
  }
  return param_1;
}


