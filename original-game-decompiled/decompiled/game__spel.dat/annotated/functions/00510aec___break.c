
/* ==== __break @ 00510aec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00510aec-00510aec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


