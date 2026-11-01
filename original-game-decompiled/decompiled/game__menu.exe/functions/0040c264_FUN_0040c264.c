
/* ==== FUN_0040c264 @ 0040c264 ==== 
 * signature: char * __register FUN_0040c264(byte * param_1, char param_2)
 * body: 0040c264-0040c2a3
 */

char * FUN_0040c264(byte *param_1,char param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = FUN_00408c98((char *)param_1,param_2);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    uVar2 = FUN_0040bf10(param_1,(int)pcVar1 - (int)param_1);
    if ((char)uVar2 == '\0') break;
    if ((char)uVar2 == '\x01') {
      pcVar1 = pcVar1 + 1;
    }
    pcVar1 = FUN_00408c98(pcVar1 + 1,param_2);
  }
  return pcVar1;
}


