
/* ==== FUN_0045f46c @ 0045f46c ==== 
 * signature: int __register FUN_0045f46c(void)
 * body: 0045f46c-0045f4b2
 */

int FUN_0045f46c(void)

{
  if (DAT_004ac924 == 0) {
    if (DAT_004ac91c == (undefined4 *)0x0) {
      FUN_00403c40("Debugfilename not init.");
    }
    DAT_004ac924 = FUN_0045f4f8((uint)FUN_0045f448,'\x01',DAT_004ac91c);
  }
  return DAT_004ac924;
}


