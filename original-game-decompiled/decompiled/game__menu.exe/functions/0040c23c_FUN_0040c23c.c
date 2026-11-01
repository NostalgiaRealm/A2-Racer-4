
/* ==== FUN_0040c23c @ 0040c23c ==== 
 * signature: char * __register FUN_0040c23c(byte * param_1, char param_2)
 * body: 0040c23c-0040c263
 */

char * FUN_0040c23c(byte *param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = FUN_0040c264(param_1,param_2);
  pcVar3 = pcVar2;
  if (param_2 != '\0') {
    while (pcVar1 = pcVar3, pcVar1 != (char *)0x0) {
      pcVar3 = FUN_0040c264((byte *)(pcVar1 + 1),param_2);
      pcVar2 = pcVar1;
    }
  }
  return pcVar2;
}


