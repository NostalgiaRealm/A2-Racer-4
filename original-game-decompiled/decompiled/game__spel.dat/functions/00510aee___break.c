
/* ==== __break @ 00510aee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00510aee-00510aee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


