#
#	This script dumps all typedef's from a source tree to add them as a .h to IDA
#	08.11.2011 - Alexander Pick
#

use warnings;
use Cwd;

use File::Find;

find(\&crawl, cwd);

sub crawl {

  my $file = $File::Find::name;

  return unless(-f $file);

  return unless($file =~ m/\.h$/);

  open(FILE, $file) or print "couldn't open ".$file."\n" && return;

  my $start = 0;

  while ($line = <FILE>) {
        if ($line =~ m/typedef\ struct/) {
                $start = 1;
        }
        if($start == 1) {
                print $line;
        }
        if(($line =~ m/\}/) && $start) {
                $start = 0;
        }
  }

  close FILE;
}
