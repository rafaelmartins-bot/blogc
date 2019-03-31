node {
    /* Requires the Docker Pipeline plugin to be installed */
    docker.image('alpine:latest').inside {
        stage('Setup') {
            sh 'apk add --no-cache curl bash'
        }
        stage('Test') {
            sh 'curl -sSf https://yatr.rgm.io/run.sh | TRAVIS=true TARGET=distcheck bash' 
        }
    }
}
