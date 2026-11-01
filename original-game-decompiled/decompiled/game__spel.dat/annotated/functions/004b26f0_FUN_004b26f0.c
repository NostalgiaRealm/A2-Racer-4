
/* ==== FUN_004b26f0 @ 004b26f0 ==== 
 * signature: undefined __cdecl FUN_004b26f0(byte * param_1, int param_2, int param_3, char * param_4)
 * body: 004b26f0-004b273d
 */

void __cdecl FUN_004b26f0(byte *param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  
  iVar1 = FUN_004b2580(param_1);
  if (iVar1 == -1) {
    if (param_2 != 0) {
      if (param_3 != 0) {
        FUN_004b8e00((char *)param_1,(int *)param_4);
        return;
      }
      FUN_004b91c0((char *)param_1,(int *)param_4);
      return;
    }
    FUN_004b94e0((char *)param_1);
  }
  return;
}


